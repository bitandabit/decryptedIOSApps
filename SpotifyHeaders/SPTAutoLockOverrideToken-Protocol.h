//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SPTAutoLockOverrideToken <NSObject>
@property(readonly, nonatomic) long long mode;
@property(readonly, copy, nonatomic) NSString *reason;
- (void)relinquish;
@end
