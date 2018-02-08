//
//  AISphereView.h
//  AISphereView
//
//  Created by Mayqiyue on 02/02/2018.
//

#import <UIKit/UIKit.h>

@class AISphereView;

@protocol AISphereViewDelegate <NSObject>

@optional
- (void)sphereView:(AISphereView *)sphereView didSelectItem:(UIView *)view;

@end

@interface AISphereView : UIView

@property (nonatomic, weak) id<AISphereViewDelegate> delegate;
@property (nonatomic, copy) UIColor *lineColor;

- (void)animateToCenter:(UIView *)centerView withItems:(NSArray <UIView *>*)items;

- (void)timerStart;

- (void)timerStop;


@end