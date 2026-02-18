import ComposableArchitecture

@Reducer
struct AppRootFeature {
    @ObservableState
    struct State: Equatable {
        var destination: Destination
        
        @CasePathable
        enum Destination: Equatable {
            case login(LoginFeature.State)
            case mainTab
        }
        
        init() {
            self.destination = .mainTab //.login(LoginFeature.State())
        }
    }
    
    @CasePathable
    enum Action: Equatable {
        case login(LoginFeature.Action)
    }
    
    init() {}
    
    var body: some ReducerOf<Self> {
        Reduce { state, action in
            switch action {
            case .login(.delegate(.loginSuccess)):
                state.destination = .mainTab
                return .none
            default:
                return .none
            }
        }
        .ifLet(\.destination.login, action: \.login) {
            LoginFeature()
        }
    }
}

extension AppRootFeature.State.Destination {
    var login: LoginFeature.State? {
        get {
            guard case let .login(state) = self else { return nil }
            return state
        }
        set {
            if let newValue = newValue {
                self = .login(newValue)
            }
        }
    }
}
