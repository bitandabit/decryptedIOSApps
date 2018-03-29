//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SPTVoiceCommand;

@protocol SPTVoiceLoggerProtocol <NSObject>
- (void)logVoiceAssistantConsentWithSessionIdentifier:(NSString *)arg1;
- (void)logVoiceAssistantOnboardingWithSessionIdentifier:(NSString *)arg1 pagesViewed:(unsigned long long)arg2 totalPages:(unsigned long long)arg3 version:(NSString *)arg4 exitMethod:(NSString *)arg5;
- (void)logUIInteractionWithSessionIdentifier:(NSString *)arg1 pageURI:(NSString *)arg2 targetURI:(NSString *)arg3 sectionId:(NSString *)arg4 interactionType:(NSString *)arg5 userIntent:(NSString *)arg6;
- (void)logNaturalLanguageErrorWithSessionIdentifier:(NSString *)arg1 errorType:(NSString *)arg2 errorText:(NSString *)arg3;
- (void)logVoiceActionWithHandledVoiceCommand:(SPTVoiceCommand *)arg1;
- (void)updateReferrerIdentifier:(NSString *)arg1;
@end

