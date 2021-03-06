//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SPTServiceManager;

@protocol SPTServiceManagerLogger <NSObject>
- (void)serviceManagerDidConfigureService:(SPTServiceManager *)arg1 serviceIdentifier:(NSString *)arg2;
- (void)serviceManagerWillConfigureService:(SPTServiceManager *)arg1 serviceIdentifier:(NSString *)arg2;
- (void)serviceManagerDidConfigureServices:(SPTServiceManager *)arg1;
- (void)serviceManagerWillConfigureServices:(SPTServiceManager *)arg1;
- (void)serviceManagerDidUnloadService:(SPTServiceManager *)arg1 serviceIdentifier:(NSString *)arg2;
- (void)serviceManagerWillUnloadService:(SPTServiceManager *)arg1 serviceIdentifier:(NSString *)arg2;
- (void)serviceManagerDidUnloadServices:(SPTServiceManager *)arg1;
- (void)serviceManagerWillUnloadServices:(SPTServiceManager *)arg1;
- (void)serviceManagerDidLoadService:(SPTServiceManager *)arg1 serviceIdentifier:(NSString *)arg2;
- (void)serviceManagerWillLoadService:(SPTServiceManager *)arg1 serviceIdentifier:(NSString *)arg2;
- (void)serviceManagerDidLoadServices:(SPTServiceManager *)arg1;
- (void)serviceManagerWillLoadServices:(SPTServiceManager *)arg1;
@end

