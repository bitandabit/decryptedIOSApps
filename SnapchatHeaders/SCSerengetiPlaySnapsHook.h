//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSerengetiHookWithSession.h"

#import "SCOperaPresenterDelegate-Protocol.h"

@class NSArray, NSString, SCOperaPresenter;

@interface SCSerengetiPlaySnapsHook : SCSerengetiHookWithSession <SCOperaPresenterDelegate>
{
    SCOperaPresenter *_operaPresenter;
    NSArray *_operaPlugins;
}

- (void).cxx_destruct;
- (void)operaPresenterWillBeginPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterWillBeginDismissing:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterWillBeginAnimatingToDismiss:(id)arg1;
- (void)operaPresenterDidTearDown:(id)arg1;
- (void)operaPresenterDidFinishPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterDidFinishDismissing:(id)arg1;
- (void)operaPresenterDidFailToPresent:(id)arg1;
- (void)operaPresenterDidCancelDismissing:(id)arg1;
- (void)operaPresenter:(id)arg1 didFinishViewingPlaylistGroupDataModel:(id)arg2 nextGroupDataModel:(id)arg3;
- (void)operaPresenter:(id)arg1 didBeginPlayingPlaylistGroupDataModel:(id)arg2;
- (void)_startPlaybackWithPlaylistFetcher:(id)arg1 presentingViewController:(id)arg2;
- (id)_makeOperaPlugins;
- (void)serengetiViewController:(id)arg1 performHookWithParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)javascriptFunctionName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

