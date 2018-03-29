//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EGOCipherManagedKey, SCGalleryEGOCipherKeyProviderListenerAnnouncer;

@interface SCGalleryEGOCipherKeyProvider : NSObject
{
    EGOCipherManagedKey *_masterKeyOld;
    EGOCipherManagedKey *_masterKeyAvoidKeyDerivation;
    _Bool _accessKeychainSucceededAndKeysAvailable;
    SCGalleryEGOCipherKeyProviderListenerAnnouncer *_announcer;
    _Bool _applicationObserved;
    double _backOffTime;
    _Bool _shouldRekey;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_announceKeysAvailableAndUnobserve;
- (_Bool)_attemptToCreateAndPersistNewKey;
- (_Bool)_attemptToCreateAndPersistOldKey;
- (void)_scheduleNextRetrievalAttempt;
- (void)_retrieveMasterKeysFromKeychainWhenAllowed;
- (void)_unobserveApplication;
- (void)_observeApplication;
- (void)_applicationProtectedDataDidBecomeAvailable:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)masterKeyAvoidKeyDerivation;
- (id)masterKeyOld;
@property(nonatomic) _Bool shouldRekey; // @synthesize shouldRekey=_shouldRekey;
- (id)init;

@end

