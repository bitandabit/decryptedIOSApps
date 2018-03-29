//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCENCKeySystem.h"
#import "SPTDataLoaderDelegate.h"
#import "SPTWidevineEventListenerDelegate.h"

@class NSMapTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, SPTDataLoader, SPTVideoPreferences;

@interface SPTWidevineService : NSObject <SPTDataLoaderDelegate, SPTWidevineEventListenerDelegate, SPTCENCKeySystem>
{
    struct Cdm *_cdm;
    struct SPTWidevineEventListener *_eventListener;
    NSObject<OS_dispatch_queue> *_cdmQueue;
    SPTVideoPreferences *_videoPreferences;
    SPTDataLoader *_dataLoader;
    NSMapTable *_psshToSession;
    NSMutableDictionary *_sessions;
}

@property(retain, nonatomic) NSMutableDictionary *sessions; // @synthesize sessions=_sessions;
@property(retain, nonatomic) NSMapTable *psshToSession; // @synthesize psshToSession=_psshToSession;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) SPTVideoPreferences *videoPreferences; // @synthesize videoPreferences=_videoPreferences;
- (void).cxx_destruct;
- (void)performOnCDMQueueSync:(CDUnknownBlockType)arg1;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)sessionKeyStatusChanged:(id)arg1;
- (void)session:(id)arg1 sendMessage:(id)arg2 ofType:(int)arg3;
- (_Bool)decryptInternal:(id)arg1 error:(id *)arg2;
- (unsigned long long)purgeAllLicenses;
- (_Bool)decryptSample:(id)arg1 withPSSH:(id)arg2 error:(id *)arg3;
- (id)fetchContentLicenseForPSSH:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isValidPSSH:(id)arg1;
- (void)closeSession:(id)arg1 withError:(id)arg2;
- (id)sessionForPSSH:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithVideoPreferences:(id)arg1 dataLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

