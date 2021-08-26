/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LRLM_ECU0.c
 *
 * Code generated for Simulink model 'LRLM_ECU0'.
 *
 * Model version                  : 1.131
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Aug 27 01:23:28 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "LRLM_ECU0.h"

/* Block signals and states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void LRLM_ECU0_step(void)
{
  int32_T rtb_PulseGenerator;

  /* Switch: '<S7>/switch' incorporates:
   *  Inport: '<Root>/brake_input'
   */
  if (rtU.brake_input > 0.0) {
    /* Outport: '<Root>/brake_light_output' incorporates:
     *  Constant: '<S7>/on_signal'
     */
    rtY.brake_light_output = 5.0;
  } else {
    /* Outport: '<Root>/brake_light_output' incorporates:
     *  Constant: '<S7>/off_signal'
     */
    rtY.brake_light_output = 0.0;
  }

  /* End of Switch: '<S7>/switch' */

  /* DiscretePulseGenerator: '<S14>/Pulse Generator' */
  rtb_PulseGenerator = (rtDW.clockTickCounter < 1) && (rtDW.clockTickCounter >=
    0) ? 5 : 0;
  if (rtDW.clockTickCounter >= 1) {
    rtDW.clockTickCounter = 0;
  } else {
    rtDW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S14>/Pulse Generator' */

  /* If: '<S10>/If1' incorporates:
   *  Inport: '<Root>/hazard_status'
   *  Inport: '<Root>/steering_angle'
   */
  if ((rtU.steering_angle > 0.0) || (rtU.hazard_switch_input == 1.0)) {
    /* Outputs for IfAction SubSystem: '<S14>/If Action Subsystem' incorporates:
     *  ActionPort: '<S15>/Action Port'
     */
    /* Merge: '<S14>/Merge' incorporates:
     *  Inport: '<S15>/In1'
     */
    rtDW.Merge = rtb_PulseGenerator;

    /* End of Outputs for SubSystem: '<S14>/If Action Subsystem' */
  } else if ((rtU.steering_angle <= 0.0) || (rtU.hazard_switch_input != 1.0)) {
    /* Outputs for IfAction SubSystem: '<S14>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S16>/Action Port'
     */
    /* Merge: '<S14>/Merge' incorporates:
     *  Constant: '<S14>/off_signal'
     *  Inport: '<S16>/In1'
     */
    rtDW.Merge = 0.0;

    /* End of Outputs for SubSystem: '<S14>/If Action Subsystem1' */
  }

  /* End of If: '<S10>/If1' */

  /* Outport: '<Root>/right_indicator_light_output' */
  rtY.right_indicator_light_output = rtDW.Merge;

  /* DiscretePulseGenerator: '<S11>/Pulse Generator' */
  rtb_PulseGenerator = (rtDW.clockTickCounter_d < 1) && (rtDW.clockTickCounter_d
    >= 0) ? 5 : 0;
  if (rtDW.clockTickCounter_d >= 1) {
    rtDW.clockTickCounter_d = 0;
  } else {
    rtDW.clockTickCounter_d++;
  }

  /* End of DiscretePulseGenerator: '<S11>/Pulse Generator' */

  /* If: '<S9>/If2' incorporates:
   *  Inport: '<Root>/hazard_status'
   *  Inport: '<Root>/steering_angle'
   */
  if ((rtU.steering_angle < 0.0) || (rtU.hazard_switch_input == 1.0)) {
    /* Outputs for IfAction SubSystem: '<S11>/If Action Subsystem' incorporates:
     *  ActionPort: '<S12>/Action Port'
     */
    /* Merge: '<S11>/Merge' incorporates:
     *  Inport: '<S12>/In1'
     */
    rtDW.Merge_o = rtb_PulseGenerator;

    /* End of Outputs for SubSystem: '<S11>/If Action Subsystem' */
  } else if ((rtU.steering_angle >= 0.0) || (rtU.hazard_switch_input != 1.0)) {
    /* Outputs for IfAction SubSystem: '<S11>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S13>/Action Port'
     */
    /* Merge: '<S11>/Merge' incorporates:
     *  Constant: '<S11>/off_signal'
     *  Inport: '<S13>/In1'
     */
    rtDW.Merge_o = 0.0;

    /* End of Outputs for SubSystem: '<S11>/If Action Subsystem1' */
  }

  /* End of If: '<S9>/If2' */

  /* Outport: '<Root>/left_indicator_light_output' */
  rtY.left_indicator_light_output = rtDW.Merge_o;

  /* Switch: '<S8>/switch' incorporates:
   *  Inport: '<Root>/hazard_status'
   */
  if (rtU.hazard_switch_input > 0.0) {
    /* Outport: '<Root>/hazard_light_output' incorporates:
     *  Constant: '<S8>/on_signal'
     */
    rtY.hazard_light_output = 5.0;
  } else {
    /* Outport: '<Root>/hazard_light_output' incorporates:
     *  Constant: '<S8>/off_signal'
     */
    rtY.hazard_light_output = 0.0;
  }

  /* End of Switch: '<S8>/switch' */

  /* Outputs for Enabled SubSystem: '<S1>/reverse_light_system' incorporates:
   *  EnablePort: '<S6>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S1>/park_light_system' incorporates:
   *  EnablePort: '<S5>/Enable'
   */
  /* Inport: '<Root>/key_input' */
  if (rtU.key_input > 0.0) {
    /* DiscretePulseGenerator: '<S17>/Pulse Generator' */
    rtb_PulseGenerator = (rtDW.clockTickCounter_o < 1) &&
      (rtDW.clockTickCounter_o >= 0) ? 5 : 0;
    if (rtDW.clockTickCounter_o >= 1) {
      rtDW.clockTickCounter_o = 0;
    } else {
      rtDW.clockTickCounter_o++;
    }

    /* End of DiscretePulseGenerator: '<S17>/Pulse Generator' */

    /* Switch: '<S17>/Switch2' incorporates:
     *  Constant: '<S18>/Constant'
     *  Constant: '<S19>/Constant'
     *  Inport: '<Root>/gear_input'
     *  Logic: '<S17>/Logical Operator'
     *  RelationalOperator: '<S18>/Compare'
     *  RelationalOperator: '<S19>/Compare'
     */
    if ((rtU.key_input >= 1.0) && (rtU.gear_input == 0.0)) {
      /* Outport: '<Root>/park_lights_output' */
      rtY.park_lights_output = rtb_PulseGenerator;
    } else {
      /* Outport: '<Root>/park_lights_output' incorporates:
       *  Constant: '<S17>/off_signal'
       */
      rtY.park_lights_output = 0.0;
    }

    /* End of Switch: '<S17>/Switch2' */

    /* DiscretePulseGenerator: '<S20>/Pulse Generator' */
    rtb_PulseGenerator = (rtDW.clockTickCounter_l < 1) &&
      (rtDW.clockTickCounter_l >= 0) ? 5 : 0;
    if (rtDW.clockTickCounter_l >= 1) {
      rtDW.clockTickCounter_l = 0;
    } else {
      rtDW.clockTickCounter_l++;
    }

    /* End of DiscretePulseGenerator: '<S20>/Pulse Generator' */

    /* Switch: '<S20>/Switch2' incorporates:
     *  Constant: '<S21>/Constant'
     *  Constant: '<S22>/Constant'
     *  Inport: '<Root>/gear_input'
     *  Logic: '<S20>/Logical Operator'
     *  RelationalOperator: '<S21>/Compare'
     *  RelationalOperator: '<S22>/Compare'
     */
    if ((rtU.key_input >= 1.0) && (rtU.gear_input == 0.0)) {
      /* Outport: '<Root>/reverse_lights_output' */
      rtY.reverse_lights_output = rtb_PulseGenerator;
    } else {
      /* Outport: '<Root>/reverse_lights_output' incorporates:
       *  Constant: '<S20>/off_signal'
       */
      rtY.reverse_lights_output = 0.0;
    }

    /* End of Switch: '<S20>/Switch2' */
  }

  /* End of Inport: '<Root>/key_input' */
  /* End of Outputs for SubSystem: '<S1>/park_light_system' */
  /* End of Outputs for SubSystem: '<S1>/reverse_light_system' */
}

/* Model initialize function */
void LRLM_ECU0_initialize(void)
{
  /* SystemInitialize for Outport: '<Root>/right_indicator_light_output' */
  rtY.right_indicator_light_output = rtDW.Merge;

  /* SystemInitialize for Outport: '<Root>/left_indicator_light_output' */
  rtY.left_indicator_light_output = rtDW.Merge_o;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
