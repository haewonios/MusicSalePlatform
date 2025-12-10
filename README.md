# MusicSalePlatform
## 환경설정

### mise 설치

```bash
# 1. mise 설치
curl https://mise.run | sh

# mise 버전 확인
~/.local/bin/mise --version

# 2. 각 터미널 환경에서 mise 활성화
# bash
$ echo 'eval "$(~/.local/bin/mise activate bash)"' >> ~/.bashrc

# zsh
$ echo 'eval "$(~/.local/bin/mise activate zsh)"' >> ~/.zshrc

# fish
$ echo '~/.local/bin/mise activate fish | source' >> ~/.config/fish/config.fish

# command not found 시 다시 활성화
source ~/.zshrc
```

### tuist 설치

```bash
# tuist 설치
mise install tuist						# Install the current version specified in .tool-versions/.mise.toml
mise install tuist@x.y.z      # Install a specific version number
mise install tuist@3          # Install a fuzzy version number

# tuist 버전 확인
tuist version
```

### 프로젝트 실행

```bash
tuist edit # tuist 설정 수정 필요할 때 
tuist install # remote 라이브러리 설치 (최초 실행 및 수정 이후 사용)
tuist generate # Xcode 프로젝트 실행 (✅)
```

