#
# ~/.bash_profile
#

if [[ "$(tty)" = "/dev/tty1" ]]; then
    pgrep dwm || startx
fi

export PATH="$PATH:$HOME/.scripts"
[[ -f ~/.bashrc ]] && . ~/.bashrc

# [[ -z $DISPLAY && $XDG_VTNR -eq 1 ]] && exec startx

