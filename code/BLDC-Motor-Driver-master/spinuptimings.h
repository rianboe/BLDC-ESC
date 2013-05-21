#include <avr/pgmspace.h>

#define SPINUP_TIMINGS_SIZE 512
const uint16_t spinup_timings[SPINUP_TIMINGS_SIZE] PROGMEM = {
    0,
	1666,
	2356,
	2886,
	3333,
	3726,
	4082,
	4409,
	4713,
	4999,
	5270,
	5527,
	5773,
	6009,
	6236,
	6454,
	6666,
	6871,
	7070,
	7264,
	7453,
	7637,
	7817,
	7992,
	8164,
	8333,
	8498,
	8660,
	8819,
	8975,
	9128,
	9279,
	9427,
	9574,
	9718,
	9860,
	9999,
	10137,
	10273,
	10408,
	10540,
	10671,
	10801,
	10928,
	11055,
	11180,
	11303,
	11425,
	11546,
	11666,
	11784,
	11902,
	12018,
	12133,
	12247,
	12360,
	12472,
	12582,
	12692,
	12801,
	12909,
	13016,
	13123,
	13228,
	13333,
	13436,
	13539,
	13642,
	13743,
	13844,
	13944,
	14043,
	14141,
	14239,
	14337,
	14433,
	14529,
	14624,
	14719,
	14813,
	14906,
	14999,
	15092,
	15183,
	15275,
	15365,
	15455,
	15545,
	15634,
	15723,
	15811,
	15898,
	15985,
	16072,
	16158,
	16244,
	16329,
	16414,
	16498,
	16582,
	16666,
	16749,
	16832,
	16914,
	16996,
	17078,
	17159,
	17239,
	17320,
	17400,
	17479,
	17559,
	17638,
	17716,
	17794,
	17872,
	17950,
	18027,
	18104,
	18180,
	18257,
	18333,
	18408,
	18484,
	18558,
	18633,
	18708,
	18782,
	18855,
	18929,
	19002,
	19075,
	19148,
	19220,
	19292,
	19364,
	19436,
	19507,
	19578,
	19649,
	19720,
	19790,
	19860,
	19930,
	19999,
	20069,
	20138,
	20207,
	20275,
	20344,
	20412,
	20480,
	20547,
	20615,
	20682,
	20749,
	20816,
	20883,
	20949,
	21015,
	21081,
	21147,
	21212,
	21278,
	21343,
	21408,
	21473,
	21537,
	21602,
	21666,
	21730,
	21794,
	21857,
	21921,
	21984,
	22047,
	22110,
	22173,
	22235,
	22298,
	22360,
	22422,
	22484,
	22545,
	22607,
	22668,
	22730,
	22791,
	22851,
	22912,
	22973,
	23033,
	23093,
	23153,
	23213,
	23273,
	23333,
	23392,
	23451,
	23510,
	23569,
	23628,
	23687,
	23746,
	23804,
	23862,
	23920,
	23978,
	24036,
	24094,
	24152,
	24209,
	24266,
	24323,
	24380,
	24437,
	24494,
	24551,
	24607,
	24664,
	24720,
	24776,
	24832,
	24888,
	24944,
	24999,
	25055,
	25110,
	25165,
	25220,
	25275,
	25330,
	25385,
	25440,
	25494,
	25549,
	25603,
	25657,
	25711,
	25765,
	25819,
	25873,
	25926,
	25980,
	26033,
	26087,
	26140,
	26193,
	26246,
	26299,
	26352,
	26404,
	26457,
	26509,
	26561,
	26614,
	26666,
	26718,
	26770,
	26822,
	26873,
	26925,
	26977,
	27028,
	27079,
	27131,
	27182,
	27233,
	27284,
	27335,
	27385,
	27436,
	27487,
	27537,
	27587,
	27638,
	27688,
	27738,
	27788,
	27838,
	27888,
	27938,
	27987,
	28037,
	28086,
	28136,
	28185,
	28234,
	28283,
	28332,
	28381,
	28430,
	28479,
	28528,
	28577,
	28625,
	28674,
	28722,
	28770,
	28819,
	28867,
	28915,
	28963,
	29011,
	29058,
	29106,
	29154,
	29202,
	29249,
	29296,
	29344,
	29391,
	29438,
	29485,
	29533,
	29580,
	29626,
	29673,
	29720,
	29767,
	29813,
	29860,
	29906,
	29953,
	29999,
	30045,
	30092,
	30138,
	30184,
	30230,
	30276,
	30321,
	30367,
	30413,
	30459,
	30504,
	30550,
	30595,
	30640,
	30686,
	30731,
	30776,
	30821,
	30866,
	30911,
	30956,
	31001,
	31046,
	31090,
	31135,
	31180,
	31224,
	31269,
	31313,
	31357,
	31402,
	31446,
	31490,
	31534,
	31578,
	31622,
	31666,
	31710,
	31753,
	31797,
	31841,
	31884,
	31928,
	31971,
	32015,
	32058,
	32101,
	32145,
	32188,
	32231,
	32274,
	32317,
	32360,
	32403,
	32446,
	32488,
	32531,
	32574,
	32616,
	32659,
	32701,
	32744,
	32786,
	32829,
	32871,
	32913,
	32955,
	32997,
	33039,
	33081,
	33123,
	33165,
	33207,
	33249,
	33291,
	33332,
	33374,
	33416,
	33457,
	33499,
	33540,
	33582,
	33623,
	33664,
	33705,
	33747,
	33788,
	33829,
	33870,
	33911,
	33952,
	33993,
	34033,
	34074,
	34115,
	34156,
	34196,
	34237,
	34277,
	34318,
	34358,
	34399,
	34439,
	34479,
	34520,
	34560,
	34600,
	34640,
	34680,
	34720,
	34760,
	34800,
	34840,
	34880,
	34920,
	34959,
	34999,
	35039,
	35078,
	35118,
	35157,
	35197,
	35236,
	35276,
	35315,
	35354,
	35394,
	35433,
	35472,
	35511,
	35550,
	35589,
	35628,
	35667,
	35706,
	35745,
	35784,
	35823,
	35861,
	35900,
	35939,
	35977,
	36016,
	36055,
	36093,
	36132,
	36170,
	36208,
	36247,
	36285,
	36323,
	36361,
	36400,
	36438,
	36476,
	36514,
	36552,
	36590,
	36628,
	36666,
	36704,
	36741,
	36779,
	36817,
	36855,
	36892,
	36930,
	36968,
	37005,
	37043,
	37080,
	37117,
	37155,
	37192,
	37230,
	37267,
	37304,
	37341,
	37378,
	37416,
	37453,
	37490,
	37527,
	37564,
	37601,
	37638,
	37675
};