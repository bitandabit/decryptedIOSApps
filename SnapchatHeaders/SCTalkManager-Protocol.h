//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol SCTCameraServices, SCTIdentityServices, SCTInstrumentationServices, SCTPhoneCallServices, SCTV3ActiveConversationsListener, SCTV3CallStateListener, SCTV3ChatTransportServices, SCTV3DebugServices, SCTV3ExperimentServices, SCTV3HeadlessCallServices, SCTV3HeadlessSession, SCTV3NetworkServices, SCTalkSession, SCTalkV3DependenciesProvider;

@protocol SCTalkManager <NSObject>
+ (id)sharedInstance;
- (NSDictionary *)activeConversations;
- (void)removeActiveConversationsListener:(id <SCTV3ActiveConversationsListener>)arg1;
- (void)addActiveConversationsListener:(id <SCTV3ActiveConversationsListener>)arg1;
- (unsigned long long)callStateForConvoId:(NSString *)arg1;
- (_Bool)hasAnyCallingActivity;
- (void)removeCallStateListener:(id <SCTV3CallStateListener>)arg1 convoId:(NSString *)arg2;
- (void)addCallStateListener:(id <SCTV3CallStateListener>)arg1 convoId:(NSString *)arg2;
- (id <SCTV3HeadlessSession>)createHeadlessSessionForConvoId:(NSString *)arg1 headessCallServices:(id <SCTV3HeadlessCallServices>)arg2;
- (id <SCTalkSession>)createSessionForConvoId:(NSString *)arg1 dependencies:(id <SCTalkV3DependenciesProvider>)arg2;
- (void)setPhoneCallServices:(id <SCTPhoneCallServices>)arg1;
- (void)setNetworkServices:(id <SCTV3NetworkServices>)arg1;
- (void)setInstrumentationServices:(id <SCTInstrumentationServices>)arg1;
- (void)setExperimentServices:(id <SCTV3ExperimentServices>)arg1;
- (void)setDebugServices:(id <SCTV3DebugServices>)arg1;
- (void)setCameraServices:(id <SCTCameraServices>)arg1;
- (void)setIdentityServices:(id <SCTIdentityServices>)arg1;
- (void)setChatTransportServices:(id <SCTV3ChatTransportServices>)arg1;
- (void)setOwnUsername:(NSString *)arg1;
- (_Bool)dependenciesReady;
- (void)reset;
@end

