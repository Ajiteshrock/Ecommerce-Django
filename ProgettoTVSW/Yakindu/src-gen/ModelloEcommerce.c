/** Generated by YAKINDU Statechart Tools code generator. */

#include "ModelloEcommerce.h"
#include "..\src\sc_types.h"

/*! \file Implementation of the state machine 'ModelloEcommerce'
*/

#ifndef SC_UNUSED
#define SC_UNUSED(P) (void)(P)
#endif
/* prototypes of all internal functions */
static sc_boolean check_main_region__choice_0_tr0_tr0(const ModelloEcommerce* handle);
static void effect_main_region__choice_0_tr0(ModelloEcommerce* handle);
static void effect_main_region__choice_0_tr1(ModelloEcommerce* handle);
static void enact_main_region_START(ModelloEcommerce* handle);
static void enseq_main_region_START_default(ModelloEcommerce* handle);
static void enseq_main_region_OUT_default(ModelloEcommerce* handle);
static void enseq_main_region_ENTER_default(ModelloEcommerce* handle);
static void enseq_main_region_CHOOSE_SERVICE_default(ModelloEcommerce* handle);
static void enseq_main_region_ADD_PRODUCT_default(ModelloEcommerce* handle);
static void enseq_main_region__final__default(ModelloEcommerce* handle);
static void enseq_main_region_default(ModelloEcommerce* handle);
static void exseq_main_region_START(ModelloEcommerce* handle);
static void exseq_main_region_OUT(ModelloEcommerce* handle);
static void exseq_main_region_ENTER(ModelloEcommerce* handle);
static void exseq_main_region_CHOOSE_SERVICE(ModelloEcommerce* handle);
static void exseq_main_region_ADD_PRODUCT(ModelloEcommerce* handle);
static void exseq_main_region__final_(ModelloEcommerce* handle);
static void exseq_main_region(ModelloEcommerce* handle);
static void react_main_region__choice_0(ModelloEcommerce* handle);
static void react_main_region__entry_Default(ModelloEcommerce* handle);
static sc_boolean react(ModelloEcommerce* handle);
static sc_boolean main_region_START_react(ModelloEcommerce* handle, const sc_boolean try_transition);
static sc_boolean main_region_OUT_react(ModelloEcommerce* handle, const sc_boolean try_transition);
static sc_boolean main_region_ENTER_react(ModelloEcommerce* handle, const sc_boolean try_transition);
static sc_boolean main_region_CHOOSE_SERVICE_react(ModelloEcommerce* handle, const sc_boolean try_transition);
static sc_boolean main_region_ADD_PRODUCT_react(ModelloEcommerce* handle, const sc_boolean try_transition);
static sc_boolean main_region__final__react(ModelloEcommerce* handle, const sc_boolean try_transition);
static void clearInEvents(ModelloEcommerce* handle);
static void clearOutEvents(ModelloEcommerce* handle);



void modelloEcommerce_init(ModelloEcommerce* handle)
{
	sc_integer i;
	
	for (i = 0; i < MODELLOECOMMERCE_MAX_ORTHOGONAL_STATES; ++i)
	{
		handle->stateConfVector[i] = ModelloEcommerce_last_state;
	}
	
	
	handle->stateConfVectorPosition = 0;
	
	clearInEvents(handle);
	clearOutEvents(handle);
	
	/* Default init sequence for statechart ModelloEcommerce */
	handle->iface.numProducts = 0;
	handle->iface.money = 0;
	handle->iface.costo = 5;
}

void modelloEcommerce_enter(ModelloEcommerce* handle)
{
	/* Default enter sequence for statechart ModelloEcommerce */
	enseq_main_region_default(handle);
}

void modelloEcommerce_runCycle(ModelloEcommerce* handle)
{
	clearOutEvents(handle);
	for (handle->stateConfVectorPosition = 0;
		handle->stateConfVectorPosition < MODELLOECOMMERCE_MAX_ORTHOGONAL_STATES;
		handle->stateConfVectorPosition++)
		{
			
		switch (handle->stateConfVector[handle->stateConfVectorPosition])
		{
		case ModelloEcommerce_main_region_START:
		{
			main_region_START_react(handle, bool_true);
			break;
		}
		case ModelloEcommerce_main_region_OUT:
		{
			main_region_OUT_react(handle, bool_true);
			break;
		}
		case ModelloEcommerce_main_region_ENTER:
		{
			main_region_ENTER_react(handle, bool_true);
			break;
		}
		case ModelloEcommerce_main_region_CHOOSE_SERVICE:
		{
			main_region_CHOOSE_SERVICE_react(handle, bool_true);
			break;
		}
		case ModelloEcommerce_main_region_ADD_PRODUCT:
		{
			main_region_ADD_PRODUCT_react(handle, bool_true);
			break;
		}
		case ModelloEcommerce_main_region__final_:
		{
			main_region__final__react(handle, bool_true);
			break;
		}
		default:
			break;
		}
	}
	
	clearInEvents(handle);
}

void modelloEcommerce_exit(ModelloEcommerce* handle)
{
	/* Default exit sequence for statechart ModelloEcommerce */
	exseq_main_region(handle);
}

sc_boolean modelloEcommerce_isActive(const ModelloEcommerce* handle)
{
	sc_boolean result = bool_false;
	sc_integer i;
	
	for(i = 0; i < MODELLOECOMMERCE_MAX_ORTHOGONAL_STATES; i++)
	{
		result = result || handle->stateConfVector[i] != ModelloEcommerce_last_state;
	}
	
	return result;
}

sc_boolean modelloEcommerce_isFinal(const ModelloEcommerce* handle)
{
	return 
	(
		handle->stateConfVector[0] == ModelloEcommerce_main_region__final_
						)
	;
}

sc_boolean modelloEcommerce_isStateActive(const ModelloEcommerce* handle, ModelloEcommerceStates state)
{
	sc_boolean result = bool_false;
	switch (state)
	{
		case ModelloEcommerce_main_region_START :
			result = (sc_boolean) (handle->stateConfVector[SCVI_MODELLOECOMMERCE_MAIN_REGION_START] == ModelloEcommerce_main_region_START
			);
			break;
		case ModelloEcommerce_main_region_OUT :
			result = (sc_boolean) (handle->stateConfVector[SCVI_MODELLOECOMMERCE_MAIN_REGION_OUT] == ModelloEcommerce_main_region_OUT
			);
			break;
		case ModelloEcommerce_main_region_ENTER :
			result = (sc_boolean) (handle->stateConfVector[SCVI_MODELLOECOMMERCE_MAIN_REGION_ENTER] == ModelloEcommerce_main_region_ENTER
			);
			break;
		case ModelloEcommerce_main_region_CHOOSE_SERVICE :
			result = (sc_boolean) (handle->stateConfVector[SCVI_MODELLOECOMMERCE_MAIN_REGION_CHOOSE_SERVICE] == ModelloEcommerce_main_region_CHOOSE_SERVICE
			);
			break;
		case ModelloEcommerce_main_region_ADD_PRODUCT :
			result = (sc_boolean) (handle->stateConfVector[SCVI_MODELLOECOMMERCE_MAIN_REGION_ADD_PRODUCT] == ModelloEcommerce_main_region_ADD_PRODUCT
			);
			break;
		case ModelloEcommerce_main_region__final_ :
			result = (sc_boolean) (handle->stateConfVector[SCVI_MODELLOECOMMERCE_MAIN_REGION__FINAL_] == ModelloEcommerce_main_region__final_
			);
			break;
		default:
			result = bool_false;
			break;
	}
	return result;
}

static void clearInEvents(ModelloEcommerce* handle)
{
	handle->iface.switchOn_raised = bool_false;
	handle->iface.go_raised = bool_false;
	handle->iface.add_raised = bool_false;
	handle->iface.exit1_raised = bool_false;
	handle->iface.exit2_raised = bool_false;
	handle->iface.procede_raised = bool_false;
	handle->iface.decision_raised = bool_false;
	handle->iface.reset_raised = bool_false;
	handle->iface.refuse_raised = bool_false;
	handle->iface.out1_raised = bool_false;
	handle->iface.recharge_raised = bool_false;
}

static void clearOutEvents(ModelloEcommerce* handle)
{
	SC_UNUSED(handle);
}

void modelloEcommerceIface_raise_switchOn(ModelloEcommerce* handle)
{
	handle->iface.switchOn_raised = bool_true;
	
	modelloEcommerce_runCycle(handle);
}
void modelloEcommerceIface_raise_go(ModelloEcommerce* handle)
{
	handle->iface.go_raised = bool_true;
	
	modelloEcommerce_runCycle(handle);
}
void modelloEcommerceIface_raise_add(ModelloEcommerce* handle)
{
	handle->iface.add_raised = bool_true;
	
	modelloEcommerce_runCycle(handle);
}
void modelloEcommerceIface_raise_exit1(ModelloEcommerce* handle)
{
	handle->iface.exit1_raised = bool_true;
	
	modelloEcommerce_runCycle(handle);
}
void modelloEcommerceIface_raise_exit2(ModelloEcommerce* handle)
{
	handle->iface.exit2_raised = bool_true;
	
	modelloEcommerce_runCycle(handle);
}
void modelloEcommerceIface_raise_procede(ModelloEcommerce* handle)
{
	handle->iface.procede_raised = bool_true;
	
	modelloEcommerce_runCycle(handle);
}
void modelloEcommerceIface_raise_decision(ModelloEcommerce* handle)
{
	handle->iface.decision_raised = bool_true;
	
	modelloEcommerce_runCycle(handle);
}
void modelloEcommerceIface_raise_reset(ModelloEcommerce* handle)
{
	handle->iface.reset_raised = bool_true;
	
	modelloEcommerce_runCycle(handle);
}
void modelloEcommerceIface_raise_refuse(ModelloEcommerce* handle)
{
	handle->iface.refuse_raised = bool_true;
	
	modelloEcommerce_runCycle(handle);
}
void modelloEcommerceIface_raise_out1(ModelloEcommerce* handle)
{
	handle->iface.out1_raised = bool_true;
	
	modelloEcommerce_runCycle(handle);
}
void modelloEcommerceIface_raise_recharge(ModelloEcommerce* handle)
{
	handle->iface.recharge_raised = bool_true;
	
	modelloEcommerce_runCycle(handle);
}


sc_integer modelloEcommerceIface_get_numProducts(const ModelloEcommerce* handle)
{
	return handle->iface.numProducts;
}
void modelloEcommerceIface_set_numProducts(ModelloEcommerce* handle, sc_integer value)
{
	handle->iface.numProducts = value;
}
sc_integer modelloEcommerceIface_get_money(const ModelloEcommerce* handle)
{
	return handle->iface.money;
}
void modelloEcommerceIface_set_money(ModelloEcommerce* handle, sc_integer value)
{
	handle->iface.money = value;
}
sc_integer modelloEcommerceIface_get_costo(const ModelloEcommerce* handle)
{
	return handle->iface.costo;
}
void modelloEcommerceIface_set_costo(ModelloEcommerce* handle, sc_integer value)
{
	handle->iface.costo = value;
}

/* implementations of all internal functions */

static sc_boolean check_main_region__choice_0_tr0_tr0(const ModelloEcommerce* handle)
{
	return ((handle->iface.numProducts) <= (3)) && ((handle->iface.money) > (0));
}

static void effect_main_region__choice_0_tr0(ModelloEcommerce* handle)
{
	enseq_main_region_CHOOSE_SERVICE_default(handle);
}

static void effect_main_region__choice_0_tr1(ModelloEcommerce* handle)
{
	enseq_main_region_OUT_default(handle);
}

/* Entry action for state 'START'. */
static void enact_main_region_START(ModelloEcommerce* handle)
{
	/* Entry action for state 'START'. */
	handle->iface.numProducts = 0;
	handle->iface.money = 16;
}

/* 'default' enter sequence for state START */
static void enseq_main_region_START_default(ModelloEcommerce* handle)
{
	/* 'default' enter sequence for state START */
	enact_main_region_START(handle);
	handle->stateConfVector[0] = ModelloEcommerce_main_region_START;
	handle->stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state OUT */
static void enseq_main_region_OUT_default(ModelloEcommerce* handle)
{
	/* 'default' enter sequence for state OUT */
	handle->stateConfVector[0] = ModelloEcommerce_main_region_OUT;
	handle->stateConfVectorPosition = 0;
	SC_UNUSED(handle);
}

/* 'default' enter sequence for state ENTER */
static void enseq_main_region_ENTER_default(ModelloEcommerce* handle)
{
	/* 'default' enter sequence for state ENTER */
	handle->stateConfVector[0] = ModelloEcommerce_main_region_ENTER;
	handle->stateConfVectorPosition = 0;
	SC_UNUSED(handle);
}

/* 'default' enter sequence for state CHOOSE_SERVICE */
static void enseq_main_region_CHOOSE_SERVICE_default(ModelloEcommerce* handle)
{
	/* 'default' enter sequence for state CHOOSE_SERVICE */
	handle->stateConfVector[0] = ModelloEcommerce_main_region_CHOOSE_SERVICE;
	handle->stateConfVectorPosition = 0;
	SC_UNUSED(handle);
}

/* 'default' enter sequence for state ADD_PRODUCT */
static void enseq_main_region_ADD_PRODUCT_default(ModelloEcommerce* handle)
{
	/* 'default' enter sequence for state ADD_PRODUCT */
	handle->stateConfVector[0] = ModelloEcommerce_main_region_ADD_PRODUCT;
	handle->stateConfVectorPosition = 0;
	SC_UNUSED(handle);
}

/* Default enter sequence for state null */
static void enseq_main_region__final__default(ModelloEcommerce* handle)
{
	/* Default enter sequence for state null */
	handle->stateConfVector[0] = ModelloEcommerce_main_region__final_;
	handle->stateConfVectorPosition = 0;
	SC_UNUSED(handle);
}

/* 'default' enter sequence for region main region */
static void enseq_main_region_default(ModelloEcommerce* handle)
{
	/* 'default' enter sequence for region main region */
	react_main_region__entry_Default(handle);
}

/* Default exit sequence for state START */
static void exseq_main_region_START(ModelloEcommerce* handle)
{
	/* Default exit sequence for state START */
	handle->stateConfVector[0] = ModelloEcommerce_last_state;
	handle->stateConfVectorPosition = 0;
	SC_UNUSED(handle);
}

/* Default exit sequence for state OUT */
static void exseq_main_region_OUT(ModelloEcommerce* handle)
{
	/* Default exit sequence for state OUT */
	handle->stateConfVector[0] = ModelloEcommerce_last_state;
	handle->stateConfVectorPosition = 0;
	SC_UNUSED(handle);
}

/* Default exit sequence for state ENTER */
static void exseq_main_region_ENTER(ModelloEcommerce* handle)
{
	/* Default exit sequence for state ENTER */
	handle->stateConfVector[0] = ModelloEcommerce_last_state;
	handle->stateConfVectorPosition = 0;
	SC_UNUSED(handle);
}

/* Default exit sequence for state CHOOSE_SERVICE */
static void exseq_main_region_CHOOSE_SERVICE(ModelloEcommerce* handle)
{
	/* Default exit sequence for state CHOOSE_SERVICE */
	handle->stateConfVector[0] = ModelloEcommerce_last_state;
	handle->stateConfVectorPosition = 0;
	SC_UNUSED(handle);
}

/* Default exit sequence for state ADD_PRODUCT */
static void exseq_main_region_ADD_PRODUCT(ModelloEcommerce* handle)
{
	/* Default exit sequence for state ADD_PRODUCT */
	handle->stateConfVector[0] = ModelloEcommerce_last_state;
	handle->stateConfVectorPosition = 0;
	SC_UNUSED(handle);
}

/* Default exit sequence for final state. */
static void exseq_main_region__final_(ModelloEcommerce* handle)
{
	/* Default exit sequence for final state. */
	handle->stateConfVector[0] = ModelloEcommerce_last_state;
	handle->stateConfVectorPosition = 0;
	SC_UNUSED(handle);
}

/* Default exit sequence for region main region */
static void exseq_main_region(ModelloEcommerce* handle)
{
	/* Default exit sequence for region main region */
	/* Handle exit of all possible states (of ModelloEcommerce.main_region) at position 0... */
	switch(handle->stateConfVector[ 0 ])
	{
		case ModelloEcommerce_main_region_START :
		{
			exseq_main_region_START(handle);
			break;
		}
		case ModelloEcommerce_main_region_OUT :
		{
			exseq_main_region_OUT(handle);
			break;
		}
		case ModelloEcommerce_main_region_ENTER :
		{
			exseq_main_region_ENTER(handle);
			break;
		}
		case ModelloEcommerce_main_region_CHOOSE_SERVICE :
		{
			exseq_main_region_CHOOSE_SERVICE(handle);
			break;
		}
		case ModelloEcommerce_main_region_ADD_PRODUCT :
		{
			exseq_main_region_ADD_PRODUCT(handle);
			break;
		}
		case ModelloEcommerce_main_region__final_ :
		{
			exseq_main_region__final_(handle);
			break;
		}
		default: break;
	}
}

/* The reactions of state null. */
static void react_main_region__choice_0(ModelloEcommerce* handle)
{
	/* The reactions of state null. */
	if (check_main_region__choice_0_tr0_tr0(handle) == bool_true)
	{ 
		effect_main_region__choice_0_tr0(handle);
	}  else
	{
		effect_main_region__choice_0_tr1(handle);
	}
}

/* Default react sequence for initial entry  */
static void react_main_region__entry_Default(ModelloEcommerce* handle)
{
	/* Default react sequence for initial entry  */
	enseq_main_region_START_default(handle);
}

static sc_boolean react(ModelloEcommerce* handle) {
	/* State machine reactions. */
	return bool_false;
	SC_UNUSED(handle);
}

static sc_boolean main_region_START_react(ModelloEcommerce* handle, const sc_boolean try_transition) {
	/* The reactions of state START. */
	sc_boolean did_transition = try_transition;
	if (try_transition == bool_true)
	{ 
		if (((handle->iface.switchOn_raised) == bool_true) && ((((handle->iface.numProducts) == (0)) && ((handle->iface.money) == (16))) == bool_true))
		{ 
			exseq_main_region_START(handle);
			enseq_main_region_ENTER_default(handle);
			react(handle);
		}  else
		{
			did_transition = bool_false;
		}
	} 
	if ((did_transition) == (bool_false))
	{ 
		did_transition = react(handle);
	} 
	return did_transition;
}

static sc_boolean main_region_OUT_react(ModelloEcommerce* handle, const sc_boolean try_transition) {
	/* The reactions of state OUT. */
	sc_boolean did_transition = try_transition;
	if (try_transition == bool_true)
	{ 
		if (handle->iface.out1_raised == bool_true)
		{ 
			exseq_main_region_OUT(handle);
			enseq_main_region__final__default(handle);
		}  else
		{
			did_transition = bool_false;
		}
	} 
	if ((did_transition) == (bool_false))
	{ 
		did_transition = react(handle);
	} 
	return did_transition;
}

static sc_boolean main_region_ENTER_react(ModelloEcommerce* handle, const sc_boolean try_transition) {
	/* The reactions of state ENTER. */
	sc_boolean did_transition = try_transition;
	if (try_transition == bool_true)
	{ 
		if (((handle->iface.go_raised) == bool_true) && ((((handle->iface.numProducts) <= (3)) && ((handle->iface.money) > (0))) == bool_true))
		{ 
			exseq_main_region_ENTER(handle);
			enseq_main_region_CHOOSE_SERVICE_default(handle);
			react(handle);
		}  else
		{
			if (handle->iface.exit1_raised == bool_true)
			{ 
				exseq_main_region_ENTER(handle);
				enseq_main_region_OUT_default(handle);
				react(handle);
			}  else
			{
				did_transition = bool_false;
			}
		}
	} 
	if ((did_transition) == (bool_false))
	{ 
		did_transition = react(handle);
	} 
	return did_transition;
}

static sc_boolean main_region_CHOOSE_SERVICE_react(ModelloEcommerce* handle, const sc_boolean try_transition) {
	/* The reactions of state CHOOSE_SERVICE. */
	sc_boolean did_transition = try_transition;
	if (try_transition == bool_true)
	{ 
		if (((handle->iface.add_raised) == bool_true) && ((((handle->iface.numProducts) <= (2)) && ((handle->iface.money) > (0))) == bool_true))
		{ 
			exseq_main_region_CHOOSE_SERVICE(handle);
			handle->iface.numProducts++;
			handle->iface.money = (handle->iface.money - handle->iface.costo);
			enseq_main_region_ADD_PRODUCT_default(handle);
			react(handle);
		}  else
		{
			if (handle->iface.reset_raised == bool_true)
			{ 
				exseq_main_region_CHOOSE_SERVICE(handle);
				handle->iface.numProducts = 0;
				handle->iface.money = 16;
				enseq_main_region_CHOOSE_SERVICE_default(handle);
				react(handle);
			}  else
			{
				if (handle->iface.exit2_raised == bool_true)
				{ 
					exseq_main_region_CHOOSE_SERVICE(handle);
					enseq_main_region_OUT_default(handle);
					react(handle);
				}  else
				{
					if (((handle->iface.recharge_raised) == bool_true) && (((handle->iface.money) <= (50)) == bool_true))
					{ 
						exseq_main_region_CHOOSE_SERVICE(handle);
						handle->iface.money = (handle->iface.money + 10);
						enseq_main_region_CHOOSE_SERVICE_default(handle);
						react(handle);
					}  else
					{
						did_transition = bool_false;
					}
				}
			}
		}
	} 
	if ((did_transition) == (bool_false))
	{ 
		did_transition = react(handle);
	} 
	return did_transition;
}

static sc_boolean main_region_ADD_PRODUCT_react(ModelloEcommerce* handle, const sc_boolean try_transition) {
	/* The reactions of state ADD_PRODUCT. */
	sc_boolean did_transition = try_transition;
	if (try_transition == bool_true)
	{ 
		if (handle->iface.refuse_raised == bool_true)
		{ 
			exseq_main_region_ADD_PRODUCT(handle);
			handle->iface.numProducts--;
			handle->iface.money = (handle->iface.money - handle->iface.costo);
			enseq_main_region_CHOOSE_SERVICE_default(handle);
			react(handle);
		}  else
		{
			if (handle->iface.decision_raised == bool_true)
			{ 
				exseq_main_region_ADD_PRODUCT(handle);
				react_main_region__choice_0(handle);
			}  else
			{
				did_transition = bool_false;
			}
		}
	} 
	if ((did_transition) == (bool_false))
	{ 
		did_transition = react(handle);
	} 
	return did_transition;
}

static sc_boolean main_region__final__react(ModelloEcommerce* handle, const sc_boolean try_transition) {
	/* The reactions of state null. */
	sc_boolean did_transition = try_transition;
	if (try_transition == bool_true)
	{ 
		did_transition = bool_false;
	} 
	if ((did_transition) == (bool_false))
	{ 
		did_transition = react(handle);
	} 
	return did_transition;
	SC_UNUSED(handle);
}

