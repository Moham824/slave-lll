


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

//Define BIT MATH, Macro like function
#define SET_BIT(REG,PIN) REG|=(1<<PIN)//Logic(1)
#define CLR_BIT(REG,PIN) REG&=~(1<<PIN)//Logic(0)
#define TGL_BIT(REG,PIN) REG^=(1<<PIN)//Not gate
#define GET_BIT(REG,PIN) ((REG>>PIN)&1)//Read value


#endif /* BIT_MATH_H_ */