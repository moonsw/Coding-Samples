/* Offsets of APIC registers from base address. */
#define APIC_ID					0x20
#define APIC_VER				0x30
#define APIC_TPR				0x80
#define APIC_APR				0x90
#define APIC_PPR				0xA0
#define APIC_EOI				0xB0
#define APIC_LDR				0xD0
#define APIC_DFR				0xE0
#define APIC_SPIV				0xF0
#define	APIC_SPIV_ENABLE_APIC			0x100
#define APIC_ISR				0x100
#define APIC_TMR				0x180
#define APIC_IRR				0x200
#define APIC_ESR				0x280
#define APIC_ICR				0x300
#define APIC_LVTT				0x320
#define APIC_LVTPC		       		0x340
#define APIC_LVT0				0x350
#define APIC_LVT1				0x360
#define APIC_LVTE				0x370
#define APIC_TICR				0x380
#define APIC_TCCR				0x390
#define APIC_TDCR				0x3E0

/* Bits of ICR register. */
#define	APIC_ICR_DM_LOWPRI		0x100
#define	APIC_ICR_DM_SMI			0x200
#define	APIC_ICR_DM_NMI			0x400
#define	APIC_ICR_DM_INIT		0x500
#define	APIC_ICR_DM_SIPI		0x600
#define	APIC_ICR_DM_LOGICAL		0x800
#define	APIC_ICR_STATUS_PEND		0x1000
#define	APIC_ICR_LEVELASSERT		0x4000
#define	APIC_ICR_TM_LEVEL		0x8000
#define	APIC_ICR_DS_SELF		0x40000
#define	APIC_ICR_DS_ALLINC		0x80000
#define	APIC_ICR_DS_ALLEX		0xC0000

#define	GET_APIC_ID(x)			((x) >> 24)

#define APIC_DISABLE	0x10000
#define APIC_SW_ENABLE	0x100

// Modes:
#define TMR_PERIODIC			0x20000
