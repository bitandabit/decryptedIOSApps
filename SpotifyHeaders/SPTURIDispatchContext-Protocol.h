//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SPTURIDispatchContext <NSObject>
@property(readonly, nonatomic, getter=isLoggedIn) _Bool loggedIn;
@property(readonly, nonatomic) _Bool shouldSuppressAnimations;
@property(readonly, nonatomic) _Bool popStackIfPossible;
@property(readonly, nonatomic) _Bool shouldUseCurrentStack;
@property(readonly, nonatomic) id annotation;
@property(readonly, copy, nonatomic) NSString *sourceApplication;
@end
