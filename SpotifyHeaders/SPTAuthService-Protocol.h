//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTService.h"

@class NSString, NSURL;

@protocol SPTAuthService <SPTService>
- (void)removeAuthServiceObserver:(id <SPTAuthServiceObserver>)arg1;
- (void)addAuthServiceObserver:(id <SPTAuthServiceObserver>)arg1;
- (void)authenticateWithURL:(NSURL *)arg1 sourceApplication:(NSString *)arg2;
@end

