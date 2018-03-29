//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCFriendLocationSnapshotMapViewModel, SCMapSnapshotView, SCUserSession, UIImageView, UILabel;

@interface SCFriendLocationSnapshotMapView : UIView
{
    SCUserSession *_userSession;
    long long _source;
    UIImageView *_placeholderBackground;
    SCMapSnapshotView *_mapSnapshotView;
    UILabel *_unavailableStateLabel;
    UIImageView *_standingPersonImageView;
    SCFriendLocationSnapshotMapViewModel *_viewModel;
}

@property(retain, nonatomic) SCFriendLocationSnapshotMapViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)standingPersonImageView;
- (id)unavailableStateLabel;
- (id)mapSnapshotView;
- (void)prepareForReuse;
- (id)initWithUserSession:(id)arg1 source:(long long)arg2;

@end
