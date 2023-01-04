#include"main.h"                                                                                                                        

#include <unistd.h>                                                                                                                     

/**                                                                                                                                     
 *
 *  * _putchar - charcter c                                                                                                                
 *
 *   * @c: to character                                                                                                                     
 *
 *    * Return: on succ. 1, errer -1 and other 0                                                                                             
 *
 *     */                                                                                                                                     

int _putchar(char c)                                                                                                                    

{                                                                                                                                       

	return (write(1, &c, 1));
}
