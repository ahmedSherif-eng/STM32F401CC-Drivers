/*
 * RCC_SYSCLK
 1- RCC_HSI
 2- RCC_HSE
 3- RCC_PLL
 */
#define RCC_SYSCLK  RCC_HSI
#ifdef RCC_PLL
/* RCC_PLL
 * 1-RCC_PLL_HSE
 * 2-RCC_PLL_HSI
 */
#define RCC_PLL_HSE
#endif
/*
 * RCC_HSE_MODE
 1- RCC_HSE_BYPASS
 2- RCC_HSE_CYRSTAL

 */

#define RCC_HSE_MODE  RCC_HSE_BYPASS
