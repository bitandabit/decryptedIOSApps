//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, SCOperaContextMenuLayerViewController, SCOperaViewController, UIViewController;

@protocol SCOperaContextMenuOverlayProvider <NSObject>
- (UIViewController *)viewControllerWithLayerViewController:(SCOperaContextMenuLayerViewController *)arg1;
- (_Bool)shouldAnimateTransition:(NSDictionary *)arg1;
- (NSString *)arrowText:(NSDictionary *)arg1;
- (void)prepareToPresentContextMenu:(UIViewController *)arg1;
- (_Bool)shouldOpenContextMenu:(NSDictionary *)arg1;
- (void)prepareContextMenuWithProperties:(NSDictionary *)arg1;
- (void)setupWithOperaViewController:(SCOperaViewController *)arg1;
@end
