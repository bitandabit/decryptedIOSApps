//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ADJSavedPreLaunch;

@interface Adjust : NSObject
{
    id <ADJLogger> _logger;
    id <ADJActivityHandler> _activityHandler;
    ADJSavedPreLaunch *_savedPreLaunch;
}

+ (id)adid;
+ (id)attribution;
+ (void)resetSessionPartnerParameters;
+ (void)resetSessionCallbackParameters;
+ (void)removeSessionPartnerParameter:(id)arg1;
+ (void)removeSessionCallbackParameter:(id)arg1;
+ (void)addSessionPartnerParameter:(id)arg1 value:(id)arg2;
+ (void)addSessionCallbackParameter:(id)arg1 value:(id)arg2;
+ (void)sendFirstPackages;
+ (id)convertUniversalLink:(id)arg1 scheme:(id)arg2;
+ (id)idfa;
+ (void)sendAdWordsRequest;
+ (void)setOfflineMode:(_Bool)arg1;
+ (void)setDeviceToken:(id)arg1;
+ (void)appWillOpenUrl:(id)arg1;
+ (_Bool)isEnabled;
+ (void)setEnabled:(_Bool)arg1;
+ (void)trackSubsessionEnd;
+ (void)trackSubsessionStart;
+ (void)trackEvent:(id)arg1;
+ (void)appDidLaunch:(id)arg1;
+ (id)getInstance;
@property(retain, nonatomic) ADJSavedPreLaunch *savedPreLaunch; // @synthesize savedPreLaunch=_savedPreLaunch;
@property(retain, nonatomic) id <ADJActivityHandler> activityHandler; // @synthesize activityHandler=_activityHandler;
@property(nonatomic) __weak id <ADJLogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (_Bool)isInstanceEnabled;
- (_Bool)checkActivityHandler:(id)arg1;
- (_Bool)checkActivityHandler:(_Bool)arg1 trueMessage:(id)arg2 falseMessage:(id)arg3;
- (_Bool)checkActivityHandler;
- (void)teardown:(_Bool)arg1;
- (id)adid;
- (id)attribution;
- (void)resetSessionPartnerParameters;
- (void)resetSessionCallbackParameters;
- (void)removeSessionPartnerParameter:(id)arg1;
- (void)removeSessionCallbackParameter:(id)arg1;
- (void)addSessionPartnerParameter:(id)arg1 value:(id)arg2;
- (void)addSessionCallbackParameter:(id)arg1 value:(id)arg2;
- (void)sendFirstPackages;
- (id)convertUniversalLink:(id)arg1 scheme:(id)arg2;
- (id)idfa;
- (void)setOfflineMode:(_Bool)arg1;
- (void)setDeviceToken:(id)arg1;
- (void)appWillOpenUrl:(id)arg1;
- (_Bool)isEnabled;
- (void)setEnabled:(_Bool)arg1;
- (void)trackSubsessionEnd;
- (void)trackSubsessionStart;
- (void)trackEvent:(id)arg1;
- (void)appDidLaunch:(id)arg1;
- (id)init;

@end
