//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSString, NSURL;

@protocol SPTCrashDetector <NSObject>
@property(readonly, nonatomic) NSString *detectorIdentifier;
@property(nonatomic) __weak id <SPTCrashDetectorDelegate> delegate;
- (NSURL *)crashReportURLForUUID:(NSString *)arg1;
- (void)recordCustomExceptionName:(NSString *)arg1 reason:(NSString *)arg2 callStack:(NSArray *)arg3;
- (void)setValue:(NSString *)arg1 forStateKey:(NSString *)arg2;
- (void)leaveBreadcrumb:(NSString *)arg1;
- (void)setUserIdentifier:(NSString *)arg1;
- (void)appShutdown;
- (void)userDidEnterAuthentificationFlow;
- (void)userDidLogIn:(NSString *)arg1;
- (void)start;

@optional
- (void (^)(NSString *, unsigned long long, NSString *, NSString *, NSString *))provideProductionAssertionHandler;
- (void)recordNonFatalError:(NSError *)arg1;
@end

