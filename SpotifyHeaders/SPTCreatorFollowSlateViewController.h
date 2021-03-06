//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "GLUEStyleable.h"
#import "SPTCreatorFollowViewModelDelegate.h"

@class CAGradientLayer, GLUEButton, GLUEImageView, GLUELabel, NSString, SPTCreatorFollowArtistModel, SPTCreatorFollowGLUETheme, SPTCreatorFollowViewModel, SPTLayoutConstraintBuilder;

@interface SPTCreatorFollowSlateViewController : UIViewController <SPTCreatorFollowViewModelDelegate, GLUEStyleable>
{
    id <SPTCreatorFollowViewDelegate> _delegate;
    SPTCreatorFollowArtistModel *_artist;
    SPTCreatorFollowViewModel *_viewModel;
    SPTCreatorFollowGLUETheme *_theme;
    GLUEImageView *_backgroundImageView;
    CAGradientLayer *_gradientLayer;
    GLUELabel *_artistNameLabel;
    GLUELabel *_infoLabel;
    GLUELabel *_followedLabel;
    GLUEButton *_followButton;
    SPTLayoutConstraintBuilder *_layout;
}

@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) GLUEButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) GLUELabel *followedLabel; // @synthesize followedLabel=_followedLabel;
@property(retain, nonatomic) GLUELabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) GLUELabel *artistNameLabel; // @synthesize artistNameLabel=_artistNameLabel;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) GLUEImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) SPTCreatorFollowGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTCreatorFollowViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SPTCreatorFollowArtistModel *artist; // @synthesize artist=_artist;
@property(nonatomic) __weak id <SPTCreatorFollowViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)followButtonTapped;
- (void)creatorFollowViewModel:(id)arg1 retrievedImage:(id)arg2;
- (void)glue_applyStyle:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)setLayoutConstraints;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithArtist:(id)arg1 viewModel:(id)arg2 theme:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

