#include <unistd.h>                                                              

/**
 * _putchar - write the character c toi stdout                                   * @c: char to be p
 * Return: 1 on success
 */                                                            

                                                                                 int _putchar(char c)                                                           {
											 return (write(1, &c, 1));
										}
