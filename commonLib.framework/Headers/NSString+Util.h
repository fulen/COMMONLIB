//
//  NSString+NullOrEmpty.h
//  PIVOT
//
//  Created by ChromSH on 15/3/12.
//  Copyright (c) 2015年 PerkinElmer, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString(Util)

- (BOOL)isEmptyOrWhitespace;

- (BOOL)isNotEmptyAndWhitespace;

- (BOOL)isValidEmail;

- (BOOL)isValidEmailWithSemicolon;

- (NSString *)firstCharacter;

- (NSString *)camelStyleString;

- (NSString *)trim;

+ (NSString *)empty;
+ (NSString *)guidString;

+ (BOOL)isEmptyString:(NSString *)string;
+ (BOOL)isNotEmptyString:(NSString *)string;

- (NSString *)removeLeadZero;
- (NSArray*)rangesArrayOfString:(NSString*)str;

- (BOOL)predicateRegular: (NSString *)regular;

- (BOOL)isAllNumber;
- (BOOL)checkFloatNumber: (NSInteger)degits dotDegits: (NSInteger)dotDegits;

- (BOOL) contains:(NSString*)string;

- (NSString *)replaceSpecialWhitespace;
- (NSString *)replaceNormalWhiteSpace;

- (void)sayHello;

@end
