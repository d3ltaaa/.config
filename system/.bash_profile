#
# ~/.bash_profile
#


export PATH="$PATH:$HOME/.scripts"
[[ -f ~/.bashrc ]] && . ~/.bashrc

# [[ -z $DISPLAY && $XDG_VTNR -eq 1 ]] && exec startx

if [[ "$(tty)" = "/dev/tty1" ]]; then
    startx
fi

