//
//  HEPrint.h
//  ThunderClean
//
//  Created by He55 on 2019/6/30.
//  Copyright © 2019 He55. All rights reserved.
//

#ifndef HEPrint_h
#define HEPrint_h

#import <Foundation/Foundation.h>

void HEPrint(NSString *format, ...);
void HEPrintln(NSString *format, ...);
void HEFprint(FILE *file, NSString *format, ...);
void HEFprintln(FILE *file, NSString *format, ...);

#endif /* HEPrint_h */
