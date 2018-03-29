//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTBarInteractiveTransitionParticipant.h"
#import "SPTGaiaConnectBarViewPresenter.h"

@class NSString, SPTGaiaConnectBarViewModel, SPTTheme, UILabel, UIView;

@interface SPTGaiaConnectBarViewController : UIViewController <SPTGaiaConnectBarViewPresenter, SPTBarInteractiveTransitionParticipant>
{
    UILabel *_messageLabel;
    SPTGaiaConnectBarViewModel *_viewModel;
    UIView *_triangleView;
    SPTTheme *_theme;
}

@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIView *triangleView; // @synthesize triangleView=_triangleView;
@property(retain, nonatomic) SPTGaiaConnectBarViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
- (void).cxx_destruct;
- (id)backgroundViewForBarTransition:(id)arg1;
- (void)displayAttributedString:(id)arg1;
- (void)addTriangleViewConstraints;
- (id)createTriangleView;
- (void)addLabelConstraints;
- (id)createMessageLabel;
- (void)addSubviews;
- (void)configureView;
- (void)connectBarTapped:(id)arg1;
- (void)addGestureRecognizers;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

