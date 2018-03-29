//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAutoLockOverrideToken.h"

@class NSString, SPTAutoLockController;

@interface SPTAutoLockOverrideTokenImplementation : NSObject <SPTAutoLockOverrideToken>
{
    _Bool _active;
    NSString *_reason;
    long long _mode;
    SPTAutoLockController *_owningController;
}

@property(readonly, nonatomic) __weak SPTAutoLockController *owningController; // @synthesize owningController=_owningController;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (void)relinquish;
- (void)dealloc;
- (id)initWithReason:(id)arg1 mode:(long long)arg2 owningController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
