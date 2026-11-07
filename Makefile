.PHONY: build

target ?= main.c
build:
	@gcc $(target) -o ./bin/$(target) -Wall -Wextra -Werror
