//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDailyMixFeedbackUIModel.h"
#import "SPTDailyMixManagerObserver.h"
#import "SPTPlayerObserver.h"

@class NSString, SPTDailyMixManagerImplementation, SPTObserverManager, SPTPlayerState;

@interface SPTDailyMixFeedbackViewModel : NSObject <SPTPlayerObserver, SPTDailyMixManagerObserver, SPTDailyMixFeedbackUIModel>
{
    _Bool _useDailyMixFeedbackUI;
    id <SPTPlayer> _player;
    SPTDailyMixManagerImplementation *_dailyMixManager;
    SPTPlayerState *_currentState;
    long long _currentlyDisplayedFeedback;
    SPTObserverManager *_observerManager;
}

@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) long long currentlyDisplayedFeedback; // @synthesize currentlyDisplayedFeedback=_currentlyDisplayedFeedback;
@property(retain, nonatomic) SPTPlayerState *currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) SPTDailyMixManagerImplementation *dailyMixManager; // @synthesize dailyMixManager=_dailyMixManager;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic, getter=shouldUseDailyMixFeedbackUI) _Bool useDailyMixFeedbackUI; // @synthesize useDailyMixFeedbackUI=_useDailyMixFeedbackUI;
- (void).cxx_destruct;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)feedbackManager:(id)arg1 track:(id)arg2 contextURL:(id)arg3 originalFeedback:(long long)arg4 didFailToChangeTo:(long long)arg5 error:(id)arg6;
- (void)dailyMixManager:(id)arg1 track:(id)arg2 contextURL:(id)arg3 originalFeedback:(long long)arg4 didChangeTo:(long long)arg5;
- (void)feedbackManagerWillUndoNegativeArtistFeedback:(id)arg1 track:(id)arg2 contextURL:(id)arg3;
- (void)feedbackManagerWillUndoNegativeTrackFeedback:(id)arg1 track:(id)arg2 contextURL:(id)arg3;
- (void)feedbackManagerWillUndoPositiveTrackFeedback:(id)arg1 track:(id)arg2 contextURL:(id)arg3;
- (void)feedbackManagerWillSubmitPositiveTrackFeedback:(id)arg1 track:(id)arg2 contextURL:(id)arg3 didAddTrackToCollection:(_Bool)arg4;
- (void)feedbackManagerWillSubmitNegativeTrackFeedback:(id)arg1 track:(id)arg2 contextURL:(id)arg3;
- (void)unban:(CDUnknownBlockType)arg1;
- (void)ban:(long long)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=shouldBanBeSelected) _Bool banBeSelected;
@property(readonly, nonatomic, getter=shouldBanBeEnabled) _Bool banBeEnabled;
@property(readonly, nonatomic, getter=shouldBanBeAvailable) _Bool banBeAvailable;
- (void)unheart:(CDUnknownBlockType)arg1;
- (void)heart:(CDUnknownBlockType)arg1;
- (id)localizedTitleForBanAction:(long long)arg1;
- (id)localizedTitleForHeartAction;
@property(readonly, nonatomic, getter=shouldHeartBeSelected) _Bool heartBeSelected;
@property(readonly, nonatomic, getter=shouldHeartBeEnabled) _Bool heartBeEnabled;
@property(readonly, nonatomic, getter=shouldHeartBeAvailable) _Bool heartBeAvailable;
@property(readonly, nonatomic, getter=isCurrentTrackBanned) _Bool currentTrackBanned;
@property(readonly, nonatomic, getter=isCurrentTrackHearted) _Bool currentTrackHearted;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)notifyObserversThatModelDidChange;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 dailyMixManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

