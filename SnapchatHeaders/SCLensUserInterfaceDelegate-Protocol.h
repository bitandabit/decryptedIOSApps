//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SCLensUserInterfaceDelegate <NSObject>
- (void)setAllInterfaceElementsHidden:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)setCarouselHidden:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)setCameraButtonHidden:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)setReplyNavigationHidden:(_Bool)arg1;
- (_Bool)shouldShowLensHints;
- (void)didTurnOnEffect;
- (void)resetUserInterfaceState;
- (void)highlightToggleCameraButton:(_Bool)arg1;
- (void)triggerToggleCameraButton;
- (void)showToggleCameraButtonTooltip:(NSString *)arg1;
@end

