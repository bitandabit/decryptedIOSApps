//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCGradientView, SCLazy, UICollectionView, UITapGestureRecognizer;
@protocol SCSearchOperaMetaStoryViewDelegate;

@interface SCSearchOperaMetaStoryView : UIView
{
    SCGradientView *_gradientView;
    SCLazy *_debugButton;
    UITapGestureRecognizer *_tapToDismissGesture;
    double _originOffsetY;
    UICollectionView *_attachedStoriesView;
    long long _currentState;
    id <SCSearchOperaMetaStoryViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCSearchOperaMetaStoryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) UICollectionView *attachedStoriesView; // @synthesize attachedStoriesView=_attachedStoriesView;
- (void).cxx_destruct;
- (void)_debugGesture:(id)arg1;
- (void)updateGradientViewWithContentTop:(double)arg1;
- (void)setupDebugButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
