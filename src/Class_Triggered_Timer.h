#ifndef CLASS_TRIGGERED_TIMER_H
#define CLASS_TRIGGERED_TIMER_H


/*============================================================================*/
/* Inclusions */
/*============================================================================*/
#include <stdint.h>
#include <stdbool.h>


/*============================================================================*/
/* Class */
/*============================================================================*/
typedef struct {
    uint32_t Counter;
} Class_Triggered_Timer_Var;

typedef struct {

    /* Sent events */
    void (*Time_Is_Up) ( void );

    /* Variable attributes */
    Class_Triggered_Timer_Var* var_attr;

    /* Constants attributes */
    uint32_t Recurrence_Millisecond;

} Class_Triggered_Timer;


/*============================================================================*/
/* Public methods */
/*============================================================================*/
void Class_Triggered_Timer__Start( 
    const Class_Triggered_Timer* me,
    uint32_t time_ms );
void Class_Triggered_Timer__Stop( const Class_Triggered_Timer* me );
void Class_Triggered_Timer__Tick( const Class_Triggered_Timer* me );
uint32_t Class_Triggered_Timer__Get_Remaining_Time( 
    const Class_Triggered_Timer* me );
bool Class_Triggered_Timer__Is_Active( const Class_Triggered_Timer* me );


#endif