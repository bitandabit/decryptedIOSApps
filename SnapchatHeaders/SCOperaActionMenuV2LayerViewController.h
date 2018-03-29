//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCOperaActionMenuV2LayerView, UISwipeGestureRecognizer, UITapGestureRecognizer;

@interface SCOperaActionMenuV2LayerViewController : SCOperaLayerViewController <UIGestureRecognizerDelegate>
{
    SCOperaActionMenuV2LayerView *_layerView;
    UITapGestureRecognizer *_tapGesture;
    UISwipeGestureRecognizer *_downSwipeGesture;
}

- (void).cxx_destruct;
- (id)_convertItemConfigFromActionMenuV2Option:(id)arg1;
- (id)_parseMenuItemsWithLayer:(id)arg1;
- (void)_actionMenuPressWithEventName:(id)arg1;
- (void)_headerTapped;
- (void)_endActionMenuSession;
- (void)_didTapOnHDButton:(id)arg1;
- (void)_didSwipeDown:(id)arg1;
- (void)_didTap:(id)arg1;
- (void)_setupGestures;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1;
- (void)didReceiveUpdateProperties:(id)arg1;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
