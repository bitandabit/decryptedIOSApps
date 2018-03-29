//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCOperaContextActionButton;
@protocol SCOperaOurStoryViewersContextViewDelegate;

@interface SCOperaOurStoryViewersContextView : UIView
{
    UIView *_horizontalSeparatorView;
    SCOperaContextActionButton *_viewsCountButton;
    SCOperaContextActionButton *_screenshotsCountButton;
    SCOperaContextActionButton *_deleteButton;
    SCOperaContextActionButton *_saveButton;
    id <SCOperaOurStoryViewersContextViewDelegate> _delegate;
    unsigned long long _viewsCount;
    unsigned long long _screenshotsCount;
}

@property(nonatomic) unsigned long long screenshotsCount; // @synthesize screenshotsCount=_screenshotsCount;
@property(nonatomic) unsigned long long viewsCount; // @synthesize viewsCount=_viewsCount;
@property(nonatomic) __weak id <SCOperaOurStoryViewersContextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_onSave:(id)arg1;
- (void)_onDelete:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
