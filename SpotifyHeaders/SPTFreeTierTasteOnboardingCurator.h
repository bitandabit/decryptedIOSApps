//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"
#import "SPTFreeTierTasteOnboardingCurationProvider.h"

@class NSString, SPTDataLoader, SPTObserverManager;

@interface SPTFreeTierTasteOnboardingCurator : NSObject <SPTDataLoaderDelegate, SPTFreeTierTasteOnboardingCurationProvider>
{
    SPTDataLoader *_dataLoader;
    id <SPTLocalSettings> _localSettings;
    SPTObserverManager *_observerManager;
}

@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)curateWithType:(id)arg1 sourceIdentifier:(id)arg2;
- (void)curateTrackTaste;
- (void)curateArtistTaste;
@property(readonly, nonatomic, getter=isInitialCurationCompleted) _Bool initialCurationCompleted;
- (id)initWithDataLoader:(id)arg1 localSettings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

