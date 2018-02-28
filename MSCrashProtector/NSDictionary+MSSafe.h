//
//  NSDictionary+MSSafe.h
//  
//
//  Created by J on 2014/2/26.
//  Copyright © 2014年 J. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <libkern/OSAtomic.h>

@interface NSDictionary (MSSafe)

- (id)objectForKey:(NSString *)aKey defaultValue:(id)value;
- (id)objectForKey:(NSString *)aKey kindOfClass:(Class)aClass;
- (id)objectForKey:(NSString *)aKey memberOfClass:(Class)aClass;
- (NSString *)stringForKey:(NSString *)aKey defaultValue:(NSString *)value;
- (NSArray *)arrayForKey:(NSString *)aKey defaultValue:(NSArray *)value;
- (NSDictionary *)dictionaryForKey:(NSString *)aKey defaultValue:(NSDictionary *)value;
- (NSData *)dataForKey:(NSString *)aKey defaultValue:(NSData *)value;
- (NSDate *)dateForKey:(NSString *)aKey defaultValue:(NSDate *)value;
- (NSNumber *)numberForKey:(NSString *)aKey defaultValue:(NSNumber *)value;

- (NSUInteger)unsignedIntegerForKey:(NSString *)aKey defaultValue:(NSUInteger)value;
- (NSInteger)integerForKey:(NSString *)aKey defaultValue:(NSInteger)value;

- (float)floatForKey:(NSString *)aKey defaultValue:(float)value;
- (double)doubleForKey:(NSString *)aKey defaultValue:(double)value;
- (long long)longLongValueForKey:(NSString *)aKey defaultValue:(long long)value;
- (BOOL)boolForKey:(NSString *)aKey defaultValue:(BOOL)value;
- (int)intForKey:(NSString *)aKey defaultValue:(int)value;

@end

@interface NSMutableDictionary (MSSafe)

- (void)setObjectSafe:(id)value forKey:(id)aKey;
- (void)setString:(NSString *)value forKey:(NSString *)aKey;
- (void)setNumber:(NSNumber *)value forKey:(NSString *)aKey;
- (void)setInteger:(NSInteger)value forKey:(NSString *)aKey;
- (void)setInt:(int)value forKey:(NSString *)aKey;
- (void)setFloat:(float)value forKey:(NSString *)aKey;
- (void)setDouble:(double)value forKey:(NSString *)aKey;
- (void)setLongLongValue:(long long)value forKey:(NSString *)aKey;
- (void)setBool:(BOOL)value forKey:(NSString *)aKey;

@end
