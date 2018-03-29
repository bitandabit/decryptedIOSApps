//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCPreviewDrawingToolBarButtonItem;

@protocol SCPreviewDrawingToolBarButtonItemDelegate <NSObject>
- (void)didEndDrawingPixelation;
- (void)didStartDrawingPixelation;
- (void)displayedEmojiBrushAnimation;
- (void)drawingToolBarButtonItemDidPressPixelation:(SCPreviewDrawingToolBarButtonItem *)arg1 withPixelType:(long long)arg2;
- (void)drawingToolBarButtonItemDidPressDrawer:(SCPreviewDrawingToolBarButtonItem *)arg1 enabled:(_Bool)arg2;
- (void)drawingToolBarButtonItemDidPressReset:(SCPreviewDrawingToolBarButtonItem *)arg1;
- (void)drawingMovedToPoint:(struct CGPoint)arg1;
- (void)didPinchBrush;
- (void)didEndDrawingWithStrokeSize:(double)arg1 isResized:(_Bool)arg2;
- (void)didStartDrawing;
- (void)didAlterDrawing;
@end
