//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, SCOnDemandGeofilterPillButton, UICollectionView, UIImageView;
@protocol SCOnDemandGeofilterNewUserGuidelinesViewDelegate;

@interface SCOnDemandGeofilterNewUserGuidelinesView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>
{
    UIImageView *_imageViewLeft;
    UIImageView *_imageViewMid;
    UIImageView *_imageViewRight;
    UIImageView *_imageContainerView;
    SCOnDemandGeofilterPillButton *_continueButton;
    UICollectionView *_colloectionInfoView;
    NSArray *_imageViewModelArray;
    struct CGPoint _originalTranslatePosition;
    NSDictionary *_imageAssetDictionary;
    id <SCOnDemandGeofilterNewUserGuidelinesViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCOnDemandGeofilterNewUserGuidelinesViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_imageAssetFromServerConfig;
- (id)newUserGuidelinesAssetUrlBasedOn:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)generateMidStatusBetweenStartViewModel:(id)arg1 endViewModel:(id)arg2 percentage:(double)arg3;
- (id)mapContainerViewModelEnd;
- (id)mapContainerViewModelStart;
- (id)customizeViewModel;
- (id)purchaseViewModel;
- (id)_infoLabelTextForTutorial:(unsigned long long)arg1;
- (id)_generateViewModelForTutorial:(unsigned long long)arg1;
- (void)updateImageViewsBasedOnViewModel:(id)arg1;
- (void)updateGeofenceTutorialBasedOnStage:(long long)arg1;
- (void)updateTemplatesTutorialBasedOnStage:(long long)arg1;
- (void)didTapNextButton;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)_imageViewbackgroundColorForTutorial:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andTutorial:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

