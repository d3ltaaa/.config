#
# ~/.bash_profile
#

export PATH="$PATH:$HOME/.scripts"
[[ -f ~/.bashrc ]] && . ~/.bashrc


if [[ "$(tty)" = "/dev/tty1" ]]; then
    startx
fi

