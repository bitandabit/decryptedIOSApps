//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, SPTSpiderMenuLogger, UIImage, UIImageView, UILabel, UISelectionFeedbackGenerator;

@interface SPTSpiderMenuView : UIView
{
    _Bool _shouldClearTitle;
    int _iconWidth;
    int _iconHeight;
    int _currentActiveIconIndex;
    NSArray *_icons;
    UILabel *_hoveredActionTitle;
    UILabel *_dragHereLabel;
    UIImageView *_arrowView;
    UIImage *_arrowUpImage;
    UIImage *_arrowDownImage;
    NSMutableArray *_subMenuArray;
    long long _dragHereDisplayedCount;
    SPTSpiderMenuLogger *_spiderLogger;
    UISelectionFeedbackGenerator *_selectionFeedback;
    struct CGRect _startFrame;
}

@property(retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedback; // @synthesize selectionFeedback=_selectionFeedback;
@property(retain, nonatomic) SPTSpiderMenuLogger *spiderLogger; // @synthesize spiderLogger=_spiderLogger;
@property(nonatomic) long long dragHereDisplayedCount; // @synthesize dragHereDisplayedCount=_dragHereDisplayedCount;
@property(nonatomic) _Bool shouldClearTitle; // @synthesize shouldClearTitle=_shouldClearTitle;
@property(nonatomic) struct CGRect startFrame; // @synthesize startFrame=_startFrame;
@property(retain, nonatomic) NSMutableArray *subMenuArray; // @synthesize subMenuArray=_subMenuArray;
@property(retain, nonatomic) UIImage *arrowDownImage; // @synthesize arrowDownImage=_arrowDownImage;
@property(retain, nonatomic) UIImage *arrowUpImage; // @synthesize arrowUpImage=_arrowUpImage;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *dragHereLabel; // @synthesize dragHereLabel=_dragHereLabel;
@property(retain, nonatomic) UILabel *hoveredActionTitle; // @synthesize hoveredActionTitle=_hoveredActionTitle;
@property(nonatomic) int currentActiveIconIndex; // @synthesize currentActiveIconIndex=_currentActiveIconIndex;
@property(nonatomic) int iconHeight; // @synthesize iconHeight=_iconHeight;
@property(nonatomic) int iconWidth; // @synthesize iconWidth=_iconWidth;
@property(retain, nonatomic) NSArray *icons; // @synthesize icons=_icons;
- (void).cxx_destruct;
- (id)splayIconsAroundPoint:(struct CGPoint)arg1 withinFrame:(struct CGRect)arg2;
- (int)iconIndexAtPoint:(struct CGPoint)arg1;
- (void)hover:(struct CGPoint)arg1 withGesture:(id)arg2;
- (void)closeWithGesture:(id)arg1;
- (void)setupDragHereViewWithStartPoint:(struct CGPoint)arg1 direction:(int)arg2;
- (void)open:(struct CGPoint)arg1 withGesture:(id)arg2;
- (id)initWithSpiderLogger:(id)arg1;

@end

