/******************************************************************************/
/* User Level #define Macros                                                  */
/******************************************************************************/
volatile union {
    unsigned char byte;
    GPIObits_t bits;
} LATGPIO;

#define LATGPIO_FLUSH GPIO = LATGPIO.byte


#define ULTRASONIC_TRIGGER              LATGPIO.bits.GP5
#define ULTRASONIC_TRIGGER_BIT          GP5_bit
#define ULTRASONIC_TRIGGER_TRISBIT      TRISIObits.TRISIO5

#define ULTRASONIC_ECHO                 GP2
#define ULTRASONIC_ECHO_BIT             GP2_bit
#define ULTRASONIC_ECHO_MASK            _GPIO_GP2_MASK
#define ULTRASONIC_ECHO_TRISBIT         TRISIObits.TRISIO2

#define DOOR_SENSOR                     GP4
#define DOOR_SENSOR_BIT                 GP4_bit
#define DOOR_SENSOR_TRISBIT             TRISIObits.TRISIO4

#define RELAY                           LATGPIO.bits.GP1
#define RELAY_BIT                       GP1_bit
#define RELAY_TRISBIT                   TRISIObits.TRISIO1

/* TODO Application specific user parameters used in user.c may go here */

/******************************************************************************/
/* User Function Prototypes                                                   */
/******************************************************************************/

void InitApp(void);         /* I/O and Peripheral Initialization */