//
//  PlayingCardView.h
//  SuperCard
//
//  Created by Jon Diehl on 2/12/14.
//  Copyright (c) 2014 Jon Diehl. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayingCardView : UIView
@property (nonatomic) NSUInteger rank;
@property (strong, nonatomic) NSString *suit;
@property (nonatomic) BOOL faceUp;
@property (nonatomic) CGFloat faceCardScaleFactor;
- (CGFloat)cornerScaleFactor ;
- (CGFloat)cornerRadius ;
- (CGFloat)cornerOffset ;
@end
