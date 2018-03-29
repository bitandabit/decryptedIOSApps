//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface SCKeyServiceAuthorizationAttemptBuilder : NSObject
{
    NSString *_userId;
    long long _numberOfAttempts;
    NSDate *_allowedFutureDate;
}

+ (id)withKeyServiceAuthorizationAttempt:(id)arg1;
- (void).cxx_destruct;
- (id)setAllowedFutureDate:(id)arg1;
- (id)setNumberOfAttempts:(long long)arg1;
- (id)setUserId:(id)arg1;
- (id)build;

@end

