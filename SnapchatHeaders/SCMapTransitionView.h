//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCTimeProfilable-Protocol.h"

@class MainViewController, NSObject, NSString, SCTransitionSnapshotView, SCUserSession;
@protocol OS_dispatch_queue;

@interface SCMapTransitionView : UIView <SCTimeProfilable>
{
    UIView *_containerSuperview;
    UIView *_containerView;
    NSObject<OS_dispatch_queue> *_snapshotBackgroundQueue;
    SCUserSession *_userSession;
    MainViewController *_mainViewController;
    SCTransitionSnapshotView *_profileView;
    SCTransitionSnapshotView *_chatView;
    SCTransitionSnapshotView *_memoriesView;
    SCTransitionSnapshotView *_storiesView;
    struct CGSize _panelsOffset;
}

+ (int)context;
@property(retain, nonatomic) SCTransitionSnapshotView *storiesView; // @synthesize storiesView=_storiesView;
@property(retain, nonatomic) SCTransitionSnapshotView *memoriesView; // @synthesize memoriesView=_memoriesView;
@property(retain, nonatomic) SCTransitionSnapshotView *chatView; // @synthesize chatView=_chatView;
@property(retain, nonatomic) SCTransitionSnapshotView *profileView; // @synthesize profileView=_profileView;
@property(nonatomic) __weak MainViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) struct CGSize panelsOffset; // @synthesize panelsOffset=_panelsOffset;
- (void).cxx_destruct;
- (id)_storiesSnapshot:(_Bool)arg1;
- (id)_memoriesSnapshot:(_Bool)arg1;
- (id)_chatSnapshot:(_Bool)arg1;
- (id)_profileSnapshot;
- (void)layoutSubviews;
- (void)setExtraScale:(double)arg1;
- (void)setPanelsScale:(double)arg1;
- (void)setColorsAlpha:(double)arg1;
- (void)setPanelsAlpha:(double)arg1;
- (void)setCollapsed:(_Bool)arg1;
- (void)clearSnapshots;
- (void)updateSnapshotsWithFocusedItem:(unsigned long long)arg1;
- (id)initWithMainViewController:(id)arg1 userSession:(id)arg2;
- (double)snapcodeScale;
- (double)snapcodeWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

