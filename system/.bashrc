#
# ~/.bashrc
#

# If not running interactively, don't do anything
[[ $- != *i* ]] && return

alias ls='ls --color=auto'
alias grep='grep --color=auto'
alias s='startx'

PS1='[\u@\h \W]\$ '

if [[ ! "$(tty)" = "/dev/tty1" ]]; then
    neofetch
fi
