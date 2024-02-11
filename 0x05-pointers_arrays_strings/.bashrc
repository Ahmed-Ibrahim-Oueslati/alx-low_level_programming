# .bashrc

# If not running interactively, don't do anything
[[ $- != *i* ]] && return

# Source global definitions
if [ -f /etc/bashrc ]; then
    . /etc/bashrc
fi

# User specific aliases and functions

# Customize prompt
PS1='\[\033[01;32m\]\u@\h\[\033[00m\]:\[\033[01;34m\]\w\[\033[00m\]\$ '

# Add custom aliases
alias p='./push'
alias d='clear'
alias c1='./c_file_create'  
alias c='./create_script_file'

# Set environment variables
export PATH="$HOME/bin:$PATH"
export EDITOR=vim

