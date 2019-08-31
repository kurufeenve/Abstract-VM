#ifndef CMD_HPP
#define CMD_HPP

enum class cmd {
	push = 0x00,
	pop = 0x01,
	dump = 0x02,
	assert = 0x03,
	add = 0x04,
	sub = 0x05,
	mul = 0x06,
	div = 0x07,
	mod = 0x08,
	print = 0x09,
	exit = 0x0A
};

#endif /* !CMD_HPP */
