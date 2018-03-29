//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "SPTTableViewCellInformationProvider.h"
#import "SPTThemableView.h"
#import "UIGestureRecognizerDelegate.h"

@class NSLayoutConstraint, NSString, NSTimer, SPTSwipeGestureRecognizer, SPTSwipeGestureRecognizerDelegate, SPTTableViewCellHeightComputer, UILayoutGuide, UITableViewCell;

@interface SPTTableView : UITableView <SPTTableViewCellInformationProvider, UIGestureRecognizerDelegate, SPTThemableView>
{
    _Bool _tableViewSubviewUpdatesEnabled;
    _Bool _scrollIndexVisible;
    _Bool _initialized;
    _Bool _swipingActive;
    _Bool _horizontalSwipeActive;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    SPTSwipeGestureRecognizer *_swipeGestureRecognizer;
    long long _themeStyle;
    id <SPTTableViewContinuousSwipeDelegate> _continuousSwipeDelegate;
    SPTSwipeGestureRecognizerDelegate *_swipeGestureRecognizerDelegate;
    UITableViewCell *_currentlyTouchedCell;
    NSTimer *_swipeDelayTimer;
    SPTTableViewCellHeightComputer *_heightComputer;
    UILayoutGuide *_scrollIndexContentLayoutGuide;
    NSLayoutConstraint *_scrollIndexContentTrailingConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *scrollIndexContentTrailingConstraint; // @synthesize scrollIndexContentTrailingConstraint=_scrollIndexContentTrailingConstraint;
@property(retain, nonatomic) UILayoutGuide *scrollIndexContentLayoutGuide; // @synthesize scrollIndexContentLayoutGuide=_scrollIndexContentLayoutGuide;
@property(retain, nonatomic) SPTTableViewCellHeightComputer *heightComputer; // @synthesize heightComputer=_heightComputer;
@property(nonatomic) _Bool horizontalSwipeActive; // @synthesize horizontalSwipeActive=_horizontalSwipeActive;
@property(retain, nonatomic) NSTimer *swipeDelayTimer; // @synthesize swipeDelayTimer=_swipeDelayTimer;
@property(nonatomic) _Bool swipingActive; // @synthesize swipingActive=_swipingActive;
@property(nonatomic) __weak UITableViewCell *currentlyTouchedCell; // @synthesize currentlyTouchedCell=_currentlyTouchedCell;
@property(retain, nonatomic) SPTSwipeGestureRecognizerDelegate *swipeGestureRecognizerDelegate; // @synthesize swipeGestureRecognizerDelegate=_swipeGestureRecognizerDelegate;
@property(nonatomic, getter=isInitialized) _Bool initialized; // @synthesize initialized=_initialized;
@property(nonatomic, getter=isScrollIndexVisible) _Bool scrollIndexVisible; // @synthesize scrollIndexVisible=_scrollIndexVisible;
@property(nonatomic, getter=isTableViewSubviewUpdatesEnabled) _Bool tableViewSubviewUpdatesEnabled; // @synthesize tableViewSubviewUpdatesEnabled=_tableViewSubviewUpdatesEnabled;
@property(nonatomic) __weak id <SPTTableViewContinuousSwipeDelegate> continuousSwipeDelegate; // @synthesize continuousSwipeDelegate=_continuousSwipeDelegate;
@property(nonatomic) long long themeStyle; // @synthesize themeStyle=_themeStyle;
@property(retain, nonatomic) SPTSwipeGestureRecognizer *swipeGestureRecognizer; // @synthesize swipeGestureRecognizer=_swipeGestureRecognizer;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
@property(readonly, nonatomic) struct CGRect scrollIndexFrame;
- (_Bool)isTableViewPanGestureActive;
- (_Bool)isVelocityHorizontal:(struct CGPoint)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handOffGestureRecognizer:(id)arg1 toCell:(id)arg2;
- (void)handleSwipeGestureRecognizer:(id)arg1;
- (id)cellFromRecognizer:(id)arg1;
- (void)enableSwipeWithTimer:(id)arg1;
- (void)registerClass:(Class)arg1 forCellReuseIdentifier:(id)arg2;
- (void)applyThemeLayout;
- (void)reloadSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)reloadData;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)deleteSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)insertSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (double)heightForCellWithReuseIdentifier:(id)arg1 atIndexPath:(id)arg2;
@property(nonatomic) __weak id <SPTTableViewCellHeightComputerDelegate> heightComputerDelegate;
- (void)layoutSubviews;
- (double)rowHeight;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)setHeaderViewAndUpdateHeight:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

