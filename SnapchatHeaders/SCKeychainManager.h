//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCKeychainManager : NSObject
{
}

+ (int)setBackgroundDataWithStatus:(id)arg1 forKey:(id)arg2;
+ (_Bool)setBackgroundData:(id)arg1 forKey:(id)arg2;
+ (int)removeDataForKeyWithStatus:(id)arg1;
+ (_Bool)removeDataForKey:(id)arg1;
+ (id)dataForKey:(id)arg1;
+ (id)dataForKey:(id)arg1 status:(int *)arg2;
+ (int)setDataWithStatus:(id)arg1 forKey:(id)arg2;
+ (_Bool)setData:(id)arg1 forKey:(id)arg2;
+ (void)removeAllDataExcludingWhitelist:(id)arg1;
+ (void)removeAllData;
+ (id)queryForKey:(id)arg1 WithAccess:(struct __CFString *)arg2;
+ (id)queryForKey:(id)arg1;

@end

